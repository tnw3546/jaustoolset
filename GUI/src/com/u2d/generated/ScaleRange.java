/*
 * ScaleRange.java
 *
 * This code has been auto-updated by JTS after it has been auto-generated by umlc
 * Created on Wed Oct 05 10:31:03 EDT 2011
 */

package com.u2d.generated;


import com.u2d.model.*;
import com.u2d.app.PersistenceMechanism;
import com.u2d.type.*;
import com.u2d.type.atom.*;
import com.u2d.type.composite.*;
import com.u2d.list.RelationalList;
import com.u2d.reflection.Fld;
import javax.persistence.Entity;
/** place holder for more imports **/


@Entity
public  class ScaleRange extends AbstractComplexEObject_JTS{

    
    /** Creates a new instance of ScaleRange */
    public ScaleRange() {
    }
    public Title title() { 
        StringBuffer text = new StringBuffer();
        text.append("( "+realLowerLimit.title()+", "+realUpperLimit.title()+" ) [ScaleRange]");
        return new Title(text.toString());
    }    
    


    // ******    realLowerLimit   ******
    private final StringEO realLowerLimit = new StringEO();
    public StringEO getRealLowerLimit() { return realLowerLimit;}

    // ******    realUpperLimit   ******
    private final StringEO realUpperLimit = new StringEO();
    public StringEO getRealUpperLimit() { return realUpperLimit;}

    // ******    interpretation   ******
    private final TextEO interpretation = new TextEO();
    public TextEO getInterpretation() { return interpretation;}

   
 
/************** Uncomment the following as needed *****************************/
      public static String[] fieldOrder  = {"realLowerLimit", "realUpperLimit", "interpretation"};
//    public static String[] fieldOrder        = {"fieldname1", "fieldname2"};

      ;
//    public static String[] tabViews          = {"fieldname1", "fieldname2"};

      ;
//    public static String[] flattenIntoParent = {"fieldname1", "fieldname2"};

      ;
//    public static String[] identities = {"fieldname1", "fieldname2"};

//    public static String pluralName() { return "ScaleRanges"; }
      /* Specify a color to represnt this class */
//    public static Color colorCode = new Color(0x2332);

      /* Use a different Icon for each instance. Change photoFieldName. */
//    private transient PhotoIconAssistant assistant = 
//                        new PhotoIconAssistant(this, photoFieldname);
//    public Icon iconLg() { return assistant.iconLg(); }
//    public Icon iconSm() { return assistant.iconSm(); }


      /* Specify the default search field for this class */
//    public static String defaultSearchPath = "";


      /* Specify a custom view for this class. 
//    public EView getMainView()
//    {
//       return new CustomScaleRangeView(this);
//    }
/**********************/
/**@Cmd place holder**/        
}
