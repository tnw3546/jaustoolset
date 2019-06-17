/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : DiscoveryClient_SendFSMContext.sm
 */

package src.urn_jts_DiscoveryClient_1_0;

import framework.internalEvents.*;
import src.urn_jts_DiscoveryClient_1_0.InternalEvents.*;
import src.urn_jts_DiscoveryClient_1_0.Messages.*;
import java.io.PrintStream;

public class DiscoveryClient_SendFSMContext
    extends statemap.FSMContext
{
//---------------------------------------------------------------
// Member methods.
//

    public DiscoveryClient_SendFSMContext(DiscoveryClient_SendFSM owner)
    {
        super (DiscoveryClient_SendFSM_SM.Sending);

        _owner = owner;
    }

    public DiscoveryClient_SendFSMContext(DiscoveryClient_SendFSM owner, DiscoveryClient_SendFSMState initState)
    {
        super (initState);

        _owner = owner;
    }

    public void enterStartState()
    {
        getState().Entry(this);
        return;
    }

    public void BroadcastGlobalTransition()
    {
        _transition = "BroadcastGlobalTransition";
        getState().BroadcastGlobalTransition(this);
        _transition = "";
        return;
    }

    public void BroadcastLocalTransition()
    {
        _transition = "BroadcastLocalTransition";
        getState().BroadcastLocalTransition(this);
        _transition = "";
        return;
    }

    public void GrantNodeIDTransition()
    {
        _transition = "GrantNodeIDTransition";
        getState().GrantNodeIDTransition(this);
        _transition = "";
        return;
    }

    public void RHP_TimeoutTransition()
    {
        _transition = "RHP_TimeoutTransition";
        getState().RHP_TimeoutTransition(this);
        _transition = "";
        return;
    }

    public void ReceiveTransition()
    {
        _transition = "ReceiveTransition";
        getState().ReceiveTransition(this);
        _transition = "";
        return;
    }

    public void ReportHeartbeatPulseTransition()
    {
        _transition = "ReportHeartbeatPulseTransition";
        getState().ReportHeartbeatPulseTransition(this);
        _transition = "";
        return;
    }

    public void ReportIdentificationTransition()
    {
        _transition = "ReportIdentificationTransition";
        getState().ReportIdentificationTransition(this);
        _transition = "";
        return;
    }

    public void ReportServicesTransition()
    {
        _transition = "ReportServicesTransition";
        getState().ReportServicesTransition(this);
        _transition = "";
        return;
    }

    public void SendTransition()
    {
        _transition = "SendTransition";
        getState().SendTransition(this);
        _transition = "";
        return;
    }

    public DiscoveryClient_SendFSMState getState()
        throws statemap.StateUndefinedException
    {
        if (_state == null)
        {
            throw(
                new statemap.StateUndefinedException());
        }

        return ((DiscoveryClient_SendFSMState) _state);
    }

    protected DiscoveryClient_SendFSM getOwner()
    {
        return (_owner);
    }

    public void setOwner(DiscoveryClient_SendFSM owner)
    {
        if (owner == null)
        {
            throw (
                new NullPointerException(
                    "null owner"));
        }
        else
        {
            _owner = owner;
        }

        return;
    }

//---------------------------------------------------------------
// Member data.
//

    transient private DiscoveryClient_SendFSM _owner;

    public static abstract class DiscoveryClient_SendFSMState
        extends statemap.State
    {
    //-----------------------------------------------------------
    // Member methods.
    //

        protected DiscoveryClient_SendFSMState(String name, int id)
        {
            super (name, id);
        }

        protected void Entry(DiscoveryClient_SendFSMContext context) {}
        protected void Exit(DiscoveryClient_SendFSMContext context) {}

        protected void BroadcastGlobalTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void BroadcastLocalTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void GrantNodeIDTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void RHP_TimeoutTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void ReceiveTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void ReportHeartbeatPulseTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void ReportIdentificationTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void ReportServicesTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void SendTransition(DiscoveryClient_SendFSMContext context)
        {
            Default(context);
        }

        protected void Default(DiscoveryClient_SendFSMContext context)
        {
            if (context.getDebugFlag() == true)
            {
                PrintStream str = 
                    context.getDebugStream();

                str.println(
                    "TRANSITION   : Default");
            }

            throw (
                new statemap.TransitionUndefinedException(
                    "State: " +
                    context.getState().getName() +
                    ", Transition: " +
                    context.getTransition()));
        }

    //-----------------------------------------------------------
    // Member data.
    //
    }

    /* package */ static abstract class DiscoveryClient_SendFSM_SM
    {
    //-----------------------------------------------------------
    // Member methods.
    //

    //-----------------------------------------------------------
    // Member data.
    //

        //-------------------------------------------------------
        // Constants.
        //
        public static final DiscoveryClient_SendFSM_SM_Sending Sending =
            new DiscoveryClient_SendFSM_SM_Sending("DiscoveryClient_SendFSM_SM.Sending", 0);
        public static final DiscoveryClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE =
            new DiscoveryClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE("DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE", 1);
        private static final DiscoveryClient_SendFSM_SM_Default Default =
            new DiscoveryClient_SendFSM_SM_Default("DiscoveryClient_SendFSM_SM.Default", -1);

    }

    protected static class DiscoveryClient_SendFSM_SM_Default
        extends DiscoveryClient_SendFSMState
    {
    //-----------------------------------------------------------
    // Member methods.
    //

        protected DiscoveryClient_SendFSM_SM_Default(String name, int id)
        {
            super (name, id);
        }
    //-----------------------------------------------------------
    // Member data.
    //
    }

    private static final class DiscoveryClient_SendFSM_SM_Sending
        extends DiscoveryClient_SendFSM_SM_Default
    {
    //-------------------------------------------------------
    // Member methods.
    //

        private DiscoveryClient_SendFSM_SM_Sending(String name, int id)
        {
            super (name, id);
        }

    //-------------------------------------------------------
    // Member data.
    //
    }

    private static final class DiscoveryClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE
        extends DiscoveryClient_SendFSM_SM_Default
    {
    //-------------------------------------------------------
    // Member methods.
    //

        private DiscoveryClient_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(String name, int id)
        {
            super (name, id);
        }

        protected void BroadcastGlobalTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.BroadcastGlobalTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.BroadcastGlobalTransition()");
            }

            return;
        }

        protected void BroadcastLocalTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.BroadcastLocalTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.BroadcastLocalTransition()");
            }

            return;
        }

        protected void GrantNodeIDTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.GrantNodeIDTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.GrantNodeIDTransition()");
            }

            return;
        }

        protected void RHP_TimeoutTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.RHP_TimeoutTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.RHP_TimeoutTransition()");
            }

            return;
        }

        protected void ReceiveTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReceiveTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReceiveTransition()");
            }

            return;
        }

        protected void ReportHeartbeatPulseTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReportHeartbeatPulseTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReportHeartbeatPulseTransition()");
            }

            return;
        }

        protected void ReportIdentificationTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReportIdentificationTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReportIdentificationTransition()");
            }

            return;
        }

        protected void ReportServicesTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReportServicesTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.ReportServicesTransition()");
            }

            return;
        }

        protected void SendTransition(DiscoveryClient_SendFSMContext context)
        {

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("LEAVING STATE   : DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("ENTER TRANSITION: DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.SendTransition()");
            }

            if (context.getDebugFlag() == true)
            {
                PrintStream str = context.getDebugStream();

                str.println("EXIT TRANSITION : DiscoveryClient_SendFSM_SM.DiscoveryClient_SendFSM_SM.Internally_Generated_State_DO_NOT_USE.SendTransition()");
            }

            return;
        }

    //-------------------------------------------------------
    // Member data.
    //
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */