//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef __TTETHERNETMODEL_TIMER_H_
#define __TTETHERNETMODEL_TIMER_H_

#include <omnetpp.h>

#include <Oscillator.h>
#include <Period.h>

#include <SchedulerMessage_m.h>
#include <SchedulerEvent.h>
#include <SchedulerMessageEvents_m.h>

namespace CoRE4INET {

/**
 * Timer Module:  Implements a timer with an attached oscillator with adjustable precision that may be synchronized by a
 * synchronization module
 *
 * @author Till Steinbach
 */
class Timer : public cSimpleModule
{
    private:
        /**
         * @brief Ticks since simulation start
         */
        uint64_t ticks;

        /**
         * @brief The attached oscillator driving the clock
         */
        Oscillator *oscillator;

        /**
         * @brief Selfmessage for the simulation core to trigger scheduling of an event
         */
        cMessage *selfMessage;

        /**
         * @brief Simulation time when the timer was last recalculated
         */
        simtime_t lastRecalculation;

        /**
         * @brief Simulation time when the timer was last recalculated
         */
        simtime_t recalculationTime;

        /**
         * @brief List of registered SchedulerActionTimeEvent.
         *
         * Used to reregister after clock tick changes.
         */
        std::map<uint64_t, std::list<SchedulerActionTimeEvent*> > registredActionTimeEvents;
        /**
         * @brief List of registered SchedulerActionTimeEvent.
         *
         * Used to reregister after clock tick changes.
         */
        std::map<uint64_t, std::list<SchedulerTimerEvent*> > registredTimerEvents;
    protected:
        /**
         * Initialization of the module. Sets oscillator and registeres signals
         */
        virtual void initialize();
        /**
         * Incoming self message triggers sendOutEvents()
         */
        virtual void handleMessage(cMessage *msg);
    private:
        /**
         * @brief Method must be called after a clock drift change in the oscillator to reschedule messages with the new
         * drift
         */
        virtual void reschedule();
        /**
         * Calculates the point in ticks when the next action must be scheduled
         * @return
         */
        virtual uint32_t nextAction();
        /**
         * Trigger the sending of all events that are due at this moment
         */
        virtual void sendOutEvents();
    public:
        /**
         * Constructor initializes members
         */
        Timer();

        /**
         * Destructor cleans up
         */
        ~Timer();
        /**
         * @brief When called, the ticks since simulation start are recalculated using current simulation time
         */
        virtual void recalculate();

        /**
         * Register a new action time event in the scheduler. May fail if ActionTimeEvent is out of schedule
         *
         * @param event Pointer to the Event to be scheduled.
         * @param period the period in which the event should be scheduled
         * @return returns registered event time
         *
         * @sa SchedulerEvent_Base, SchedulerEvent, SchedulerActionTimeEvent,
         * SchedulerTimerEvent
         */
        virtual uint64_t registerEvent(SchedulerActionTimeEvent *event, Period *period);

        /**
         * Register a new timer event in the scheduler.
         *
         * @param event Pointer to the Event to be scheduled.
         * @return returns registered event time
         *
         * @sa SchedulerEvent_Base, SchedulerEvent, SchedulerActionTimeEvent,
         * SchedulerTimerEvent
         */
        virtual uint64_t registerEvent(SchedulerTimerEvent *event);

        /**
         * @brief Returns the absolute number of ticks
         *
         * @return Number of ticks since simulation start
         */
        virtual uint64_t getTotalTicks();

        /**
         * @brief Returns a pointer to the attached oscillator
         */
        virtual Oscillator* getOscillator();

        /**
         * @brief Corrects the clock by the number of ticks
         *
         * @param ticks number of ticks the clock must be corrected
         */
        virtual void clockCorrection(int32_t ticks);

    protected:
        /**
         * Signal that is emitted every time the clock is corrected
         */
        static simsignal_t clockCorrectionSignal;
};

} //namespace

#endif
