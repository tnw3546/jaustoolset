/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Liveness_ReceiveFSM_sm.sm
 */

#include "urn_jaus_jss_core_Liveness_1_1/Messages/MessageSet.h"
#include "urn_jaus_jss_core_Liveness_1_1/Liveness_ReceiveFSM.h"
#include "include/urn_jaus_jss_core_Liveness_1_1/Liveness_ReceiveFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_core_Liveness_1_1
{
    // Static class declarations.
    Liveness_ReceiveFSM_SM_Receiving_Ready Liveness_ReceiveFSM_SM::Receiving_Ready("Liveness_ReceiveFSM_SM::Receiving_Ready", 0);
    Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE("Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void Liveness_ReceiveFSMState::BroadcastGlobalTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::BroadcastLocalTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::CancelEventTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::CommandCompletedTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::CommandExpiredTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::CreateCommandEventTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::CreateEventTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::EventErrorTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::EventOccurredTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::QueryEventTimeoutTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::QueryEventsTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::QueryHeartbeatPulseTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::ReceiveTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::ReceiveTransition(Liveness_ReceiveFSMContext& context, QueryHeartbeatPulse& msg, Receive::Body::ReceiveRec& transportData)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::SendTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::TimeoutTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::UpdateEventTransition(Liveness_ReceiveFSMContext& context)
    {
        Default(context);
        return;
    }

    void Liveness_ReceiveFSMState::Default(Liveness_ReceiveFSMContext& context)
    {
        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "TRANSITION   : Default"
                << std::endl;
        }

        throw (
            TransitionUndefinedException(
                context.getState().getName(),
                context.getTransition()));

        return;
    }

    void Liveness_ReceiveFSM_SM_Receiving_Ready::ReceiveTransition(Liveness_ReceiveFSMContext& context, QueryHeartbeatPulse& msg, Receive::Body::ReceiveRec& transportData)
    {
        Liveness_ReceiveFSM& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Receiving_Ready"
            << std::endl;
        }

        Liveness_ReceiveFSMState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryHeartbeatPulse& msg, Receive::Body::ReceiveRec& transportData)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.SendAction("ReportHeartbeatPulse", transportData);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Receiving_Ready::ReceiveTransition(QueryHeartbeatPulse& msg, Receive::Body::ReceiveRec& transportData)"
                    << std::endl;
            }

            context.setState(endState);
        }
        catch (...)
        {
            context.setState(endState);
            throw;
        }

        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CancelEventTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CancelEventTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CommandCompletedTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandCompletedTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandCompletedTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CommandExpiredTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandExpiredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CommandExpiredTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateCommandEventTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateCommandEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateCommandEventTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::CreateEventTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::CreateEventTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::EventErrorTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventErrorTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::EventOccurredTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::EventOccurredTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventTimeoutTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventTimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventTimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryEventsTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryEventsTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::QueryHeartbeatPulseTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryHeartbeatPulseTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::QueryHeartbeatPulseTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::TimeoutTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::TimeoutTransition()"
                << std::endl;
        }


        return;
    }

    void Liveness_ReceiveFSM_SM_Internally_Generated_State_DO_NOT_USE::UpdateEventTransition(Liveness_ReceiveFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : Liveness_ReceiveFSM_SM::Internally_Generated_State_DO_NOT_USE::UpdateEventTransition()"
                << std::endl;
        }


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
