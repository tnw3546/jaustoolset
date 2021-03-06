#ifndef _H_SUBSYSTEMIDALLOCATOR_SENDFSM_SM
#define _H_SUBSYSTEMIDALLOCATOR_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : SubsystemIDAllocator_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_exp_aeodrs_SubsystemIDAllocator_1_4
{
    // Forward declarations.
    class SubsystemIDAllocator_SendFSM_SM;
    class SubsystemIDAllocator_SendFSM_SM_Sending;
    class SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class SubsystemIDAllocator_SendFSM_SM_Default;
    class SubsystemIDAllocator_SendFSMState;
    class SubsystemIDAllocator_SendFSMContext;
    class SubsystemIDAllocator_SendFSM;

    class SubsystemIDAllocator_SendFSMState :
        public statemap::State
    {
    public:

        SubsystemIDAllocator_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(SubsystemIDAllocator_SendFSMContext&) {};
        virtual void Exit(SubsystemIDAllocator_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(SubsystemIDAllocator_SendFSMContext& context);
        virtual void BroadcastLocalTransition(SubsystemIDAllocator_SendFSMContext& context);
        virtual void QuerySubsystemIDsTransition(SubsystemIDAllocator_SendFSMContext& context);
        virtual void ReceiveTransition(SubsystemIDAllocator_SendFSMContext& context);
        virtual void RequestSubsystemIDTransition(SubsystemIDAllocator_SendFSMContext& context);
        virtual void SendTransition(SubsystemIDAllocator_SendFSMContext& context);

    protected:

        virtual void Default(SubsystemIDAllocator_SendFSMContext& context);
    };

    class SubsystemIDAllocator_SendFSM_SM
    {
    public:

        static SubsystemIDAllocator_SendFSM_SM_Sending Sending;
        static SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class SubsystemIDAllocator_SendFSM_SM_Default :
        public SubsystemIDAllocator_SendFSMState
    {
    public:

        SubsystemIDAllocator_SendFSM_SM_Default(const char *name, int stateId)
        : SubsystemIDAllocator_SendFSMState(name, stateId)
        {};

    };

    class SubsystemIDAllocator_SendFSM_SM_Sending :
        public SubsystemIDAllocator_SendFSM_SM_Default
    {
    public:
        SubsystemIDAllocator_SendFSM_SM_Sending(const char *name, int stateId)
        : SubsystemIDAllocator_SendFSM_SM_Default(name, stateId)
        {};

    };

    class SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public SubsystemIDAllocator_SendFSM_SM_Default
    {
    public:
        SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : SubsystemIDAllocator_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(SubsystemIDAllocator_SendFSMContext& context);
        void BroadcastLocalTransition(SubsystemIDAllocator_SendFSMContext& context);
        void QuerySubsystemIDsTransition(SubsystemIDAllocator_SendFSMContext& context);
        void ReceiveTransition(SubsystemIDAllocator_SendFSMContext& context);
        void RequestSubsystemIDTransition(SubsystemIDAllocator_SendFSMContext& context);
        void SendTransition(SubsystemIDAllocator_SendFSMContext& context);
    };

    class SubsystemIDAllocator_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        SubsystemIDAllocator_SendFSMContext(SubsystemIDAllocator_SendFSM& owner)
        : FSMContext(SubsystemIDAllocator_SendFSM_SM::Sending),
          _owner(owner)
        {};

        SubsystemIDAllocator_SendFSMContext(SubsystemIDAllocator_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        SubsystemIDAllocator_SendFSM& getOwner() const
        {
            return (_owner);
        };

        SubsystemIDAllocator_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<SubsystemIDAllocator_SendFSMState&>(*_state));
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

        void QuerySubsystemIDsTransition()
        {
            setTransition("QuerySubsystemIDsTransition");
            (getState()).QuerySubsystemIDsTransition(*this);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void RequestSubsystemIDTransition()
        {
            setTransition("RequestSubsystemIDTransition");
            (getState()).RequestSubsystemIDTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

    private:

        SubsystemIDAllocator_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_SUBSYSTEMIDALLOCATOR_SENDFSM_SM
