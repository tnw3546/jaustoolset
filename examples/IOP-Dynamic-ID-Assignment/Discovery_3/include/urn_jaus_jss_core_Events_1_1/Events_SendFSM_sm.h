#ifndef _H_EVENTS_SENDFSM_SM
#define _H_EVENTS_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Events_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_core_Events_1_1
{
    // Forward declarations.
    class Events_SendFSM_SM;
    class Events_SendFSM_SM_Sending;
    class Events_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class Events_SendFSM_SM_Default;
    class Events_SendFSMState;
    class Events_SendFSMContext;
    class Events_SendFSM;

    class Events_SendFSMState :
        public statemap::State
    {
    public:

        Events_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(Events_SendFSMContext&) {};
        virtual void Exit(Events_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(Events_SendFSMContext& context);
        virtual void BroadcastLocalTransition(Events_SendFSMContext& context);
        virtual void CancelEventTransition(Events_SendFSMContext& context);
        virtual void CommandCompletedTransition(Events_SendFSMContext& context);
        virtual void CommandExpiredTransition(Events_SendFSMContext& context);
        virtual void CreateCommandEventTransition(Events_SendFSMContext& context);
        virtual void CreateEventTransition(Events_SendFSMContext& context);
        virtual void EventErrorTransition(Events_SendFSMContext& context);
        virtual void EventOccurredTransition(Events_SendFSMContext& context);
        virtual void QueryEventTimeoutTransition(Events_SendFSMContext& context);
        virtual void QueryEventsTransition(Events_SendFSMContext& context);
        virtual void ReceiveTransition(Events_SendFSMContext& context);
        virtual void SendTransition(Events_SendFSMContext& context);
        virtual void TimeoutTransition(Events_SendFSMContext& context);
        virtual void UpdateEventTransition(Events_SendFSMContext& context);

    protected:

        virtual void Default(Events_SendFSMContext& context);
    };

    class Events_SendFSM_SM
    {
    public:

        static Events_SendFSM_SM_Sending Sending;
        static Events_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class Events_SendFSM_SM_Default :
        public Events_SendFSMState
    {
    public:

        Events_SendFSM_SM_Default(const char *name, int stateId)
        : Events_SendFSMState(name, stateId)
        {};

    };

    class Events_SendFSM_SM_Sending :
        public Events_SendFSM_SM_Default
    {
    public:
        Events_SendFSM_SM_Sending(const char *name, int stateId)
        : Events_SendFSM_SM_Default(name, stateId)
        {};

    };

    class Events_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public Events_SendFSM_SM_Default
    {
    public:
        Events_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : Events_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(Events_SendFSMContext& context);
        void BroadcastLocalTransition(Events_SendFSMContext& context);
        void CancelEventTransition(Events_SendFSMContext& context);
        void CommandCompletedTransition(Events_SendFSMContext& context);
        void CommandExpiredTransition(Events_SendFSMContext& context);
        void CreateCommandEventTransition(Events_SendFSMContext& context);
        void CreateEventTransition(Events_SendFSMContext& context);
        void EventErrorTransition(Events_SendFSMContext& context);
        void EventOccurredTransition(Events_SendFSMContext& context);
        void QueryEventTimeoutTransition(Events_SendFSMContext& context);
        void QueryEventsTransition(Events_SendFSMContext& context);
        void ReceiveTransition(Events_SendFSMContext& context);
        void SendTransition(Events_SendFSMContext& context);
        void TimeoutTransition(Events_SendFSMContext& context);
        void UpdateEventTransition(Events_SendFSMContext& context);
    };

    class Events_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        Events_SendFSMContext(Events_SendFSM& owner)
        : FSMContext(Events_SendFSM_SM::Sending),
          _owner(owner)
        {};

        Events_SendFSMContext(Events_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        Events_SendFSM& getOwner() const
        {
            return (_owner);
        };

        Events_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<Events_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void CancelEventTransition()
        {
            setTransition("CancelEventTransition");
            (getState()).CancelEventTransition(*this);
            setTransition(NULL);
        };

        void CommandCompletedTransition()
        {
            setTransition("CommandCompletedTransition");
            (getState()).CommandCompletedTransition(*this);
            setTransition(NULL);
        };

        void CommandExpiredTransition()
        {
            setTransition("CommandExpiredTransition");
            (getState()).CommandExpiredTransition(*this);
            setTransition(NULL);
        };

        void CreateCommandEventTransition()
        {
            setTransition("CreateCommandEventTransition");
            (getState()).CreateCommandEventTransition(*this);
            setTransition(NULL);
        };

        void CreateEventTransition()
        {
            setTransition("CreateEventTransition");
            (getState()).CreateEventTransition(*this);
            setTransition(NULL);
        };

        void EventErrorTransition()
        {
            setTransition("EventErrorTransition");
            (getState()).EventErrorTransition(*this);
            setTransition(NULL);
        };

        void EventOccurredTransition()
        {
            setTransition("EventOccurredTransition");
            (getState()).EventOccurredTransition(*this);
            setTransition(NULL);
        };

        void QueryEventTimeoutTransition()
        {
            setTransition("QueryEventTimeoutTransition");
            (getState()).QueryEventTimeoutTransition(*this);
            setTransition(NULL);
        };

        void QueryEventsTransition()
        {
            setTransition("QueryEventsTransition");
            (getState()).QueryEventsTransition(*this);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

        void TimeoutTransition()
        {
            setTransition("TimeoutTransition");
            (getState()).TimeoutTransition(*this);
            setTransition(NULL);
        };

        void UpdateEventTransition()
        {
            setTransition("UpdateEventTransition");
            (getState()).UpdateEventTransition(*this);
            setTransition(NULL);
        };

    private:

        Events_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_EVENTS_SENDFSM_SM
