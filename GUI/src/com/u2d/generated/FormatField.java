/*
 * FormatField.java
 *
 * This code has been auto-updated by JTS after it has been auto-generated by umlc
 * Created on Wed Oct 05 10:31:04 EDT 2011
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
public  class FormatField extends AbstractComplexEObject_JTS{

    
    /** Creates a new instance of FormatField */
    public FormatField() {
    }
    public Title title() { 
        StringBuffer text = new StringBuffer();
        text.append("FormatField Instance");
        return new Title(text.toString());
    }    
    


   



    // *********  formatEnums ******
    private final RelationalList formatEnums = new RelationalList(FormatEnum.class);
    public static final Class formatEnumsType = FormatEnum.class;
    public static final int formatEnumsRelationType = PersistenceMechanism.ONE_TO_MANY;
    public static final boolean formatEnumsRelationIsInverse = false;
    public RelationalList getFormatEnums() { return formatEnums; }



 
/************** Uncomment the following as needed *****************************/
      public static String[] fieldOrder  = {"formatEnums", "referencingVariableFormatField"};
//    public static String[] fieldOrder        = {"fieldname1", "fieldname2"};

      ;
//    public static String[] tabViews          = {"fieldname1", "fieldname2"};

      ;
//    public static String[] flattenIntoParent = {"fieldname1", "fieldname2"};

      ;
//    public static String[] identities = {"fieldname1", "fieldname2"};

//    public static String pluralName() { return "FormatFields"; }
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
//       return new CustomFormatFieldView(this);
//    }
/**********************/
/**@Cmd place holder**/        
}
