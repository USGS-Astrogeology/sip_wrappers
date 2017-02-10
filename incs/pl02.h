/*

-Header_File pl02.h ( DSK type 2 plate model API declarations )

-Abstract

   Define prototypes for DSK type 2 plate model API routines.
         
-Disclaimer

   THIS SOFTWARE AND ANY RELATED MATERIALS WERE CREATED BY THE
   CALIFORNIA INSTITUTE OF TECHNOLOGY (CALTECH) UNDER A U.S.
   GOVERNMENT CONTRACT WITH THE NATIONAL AERONAUTICS AND SPACE
   ADMINISTRATION (NASA). THE SOFTWARE IS TECHNOLOGY AND SOFTWARE
   PUBLICLY AVAILABLE UNDER U.S. EXPORT LAWS AND IS PROVIDED "AS-IS"
   TO THE RECIPIENT WITHOUT WARRANTY OF ANY KIND, INCLUDING ANY
   WARRANTIES OF PERFORMANCE OR MERCHANTABILITY OR FITNESS FOR A
   PARTICULAR USE OR PURPOSE (AS SET FORTH IN UNITED STATES UCC
   SECTIONS 2312-2313) OR FOR ANY PURPOSE WHATSOEVER, FOR THE
   SOFTWARE AND RELATED MATERIALS, HOWEVER USED.

   IN NO EVENT SHALL CALTECH, ITS JET PROPULSION LABORATORY, OR NASA
   BE LIABLE FOR ANY DAMAGES AND/OR COSTS, INCLUDING, BUT NOT
   LIMITED TO, INCIDENTAL OR CONSEQUENTIAL DAMAGES OF ANY KIND,
   INCLUDING ECONOMIC DAMAGE OR INJURY TO PROPERTY AND LOST PROFITS,
   REGARDLESS OF WHETHER CALTECH, JPL, OR NASA BE ADVISED, HAVE
   REASON TO KNOW, OR, IN FACT, SHALL KNOW OF THE POSSIBILITY.

   RECIPIENT BEARS ALL RISK RELATING TO QUALITY AND PERFORMANCE OF
   THE SOFTWARE AND ANY RELATED MATERIALS, AND AGREES TO INDEMNIFY
   CALTECH AND NASA FOR ALL THIRD-PARTY CLAIMS RESULTING FROM THE
   ACTIONS OF RECIPIENT IN THE USE OF THE SOFTWARE.

-Required_Reading

   None.
   
-Particulars

   This header defines function prototypes for DSK type 2 plate model
   beta-test API routines.

-Literature_References

   None.

-Author_and_Institution

   N.J. Bachman       (JPL)
   
-Restrictions

   None.
      
-Version

   -Beta Version 4.0.0, 21-MAR-2010 (NJB)  

       Updated to suppress C++ name mangling.

   -Beta Version 3.0.0, 12-FEB-2010 (NJB)  

       Removed prototypes of

          dskx02_c
          dlabfs_c

   -Beta Version 2.0.0, 04-SEP-2008 (NJB)  

       Updated to include prototypes for the additional APIs limb_pl02
       and term_pl02.   

   -Beta Version 1.0.0, 06-NOV-2006 (NJB)  

*/

#ifndef HAVE_PL02_H

   #define HAVE_PL02_H

   
   #ifdef __cplusplus
      extern "C" {
   #endif

   
   /*
   Prototypes
   */
   void illum_pl02  ( SpiceInt               handle,
                      ConstSpiceDLADescr   * dladsc,
                      ConstSpiceChar       * target,
                      SpiceDouble            et,
                      ConstSpiceChar       * abcorr,
                      ConstSpiceChar       * obsrvr,
                      SpiceDouble            spoint [3],
                      SpiceDouble          * phase,
                      SpiceDouble          * solar,
                      SpiceDouble          * emissn      );

   void limb_pl02   ( SpiceInt              handle,
                      ConstSpiceDLADescr  * dladsc,
                      ConstSpiceChar      * target,
                      SpiceDouble           et,
                      ConstSpiceChar      * fixfrm,
                      ConstSpiceChar      * abcorr,
                      ConstSpiceChar      * obsrvr,
                      SpiceInt              npoints,
                      SpiceDouble         * trgepc,
                      SpiceDouble           obspos   [3],
                      SpiceDouble           limbpts  [][3],
                      SpiceInt              plateIDs []     );

   void llgrid_pl02 ( SpiceInt               handle,
                      ConstSpiceDLADescr   * dladsc,
                      SpiceInt               npoints,
                      ConstSpiceDouble       grid     [][2],
                      SpiceDouble            spoints  [][3],
                      SpiceInt               plateIDs []     );

   void subpt_pl02  ( SpiceInt               handle,
                      ConstSpiceDLADescr   * dladsc,
                      ConstSpiceChar       * method,
                      ConstSpiceChar       * target,
                      SpiceDouble            et,
                      ConstSpiceChar       * abcorr,
                      ConstSpiceChar       * obsrvr,
                      SpiceDouble            spoint [3],
                      SpiceDouble          * alt,
                      SpiceInt             * plateID     );

   void subsol_pl02 ( SpiceInt               handle,
                      ConstSpiceDLADescr   * dladsc,
                      ConstSpiceChar       * method,
                      ConstSpiceChar       * target,
                      SpiceDouble            et,
                      ConstSpiceChar       * abcorr,
                      ConstSpiceChar       * obsrvr,
                      SpiceDouble            spoint [3],
                      SpiceDouble          * dist,
                      SpiceInt             * plateID     );

   void term_pl02   ( SpiceInt               handle,
                      ConstSpiceDLADescr   * dladsc,
                      ConstSpiceChar       * trmtyp,
                      ConstSpiceChar       * source,
                      ConstSpiceChar       * target,
                      SpiceDouble            et,
                      ConstSpiceChar       * fixfrm,
                      ConstSpiceChar       * abcorr,
                      ConstSpiceChar       * obsrvr,
                      SpiceInt               npoints,
                      SpiceDouble          * trgepc,
                      SpiceDouble            obspos   [3],
                      SpiceDouble            trmpts   [][3],
                      SpiceInt               plateIDs []     );

 
   #ifdef __cplusplus
      }
   #endif

#endif

