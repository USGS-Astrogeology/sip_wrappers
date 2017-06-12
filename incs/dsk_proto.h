

#ifdef __cplusplus
   extern "C" {
#endif

#ifndef HAVE_SPICE_DLA_H
   #include "SpiceDLA.h"
#endif

#ifndef HAVE_SPICE_DSK_H
   #include "SpiceDSK.h"
#endif



#ifndef HAVE_SPICE_DSK_PROTO_H

   #define HAVE_SPICE_DSK_PROTO_H



   void dlabfs_c ( SpiceInt          handle,
                   SpiceDLADescr   * descr,
                   SpiceBoolean    * found  );

   void dlafns_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * descr,
                   SpiceDLADescr        * nxtdsc,
                   SpiceBoolean         * found    );


   void dskb02_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * dladsc,
                   SpiceInt             * nv,
                   SpiceInt             * np,
                   SpiceInt             * nvxtot,
                   SpiceDouble            vtxbds  [3][2],
                   SpiceDouble          * voxsiz,
                   SpiceDouble            voxori  [3],
                   SpiceInt               vgrext  [3],
                   SpiceInt             * cgscal,
                   SpiceInt             * vtxnpl,
                   SpiceInt             * voxnpt,
                   SpiceInt             * voxnpl          );


   void dskd02_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * dladsc,
                   SpiceInt               item,
                   SpiceInt               start,
                   SpiceInt               room,
                   SpiceInt             * n,
                   SpiceDouble          * values );

   void dskgd_c ( SpiceInt               handle,
                  ConstSpiceDLADescr   * dladsc,
                  SpiceDSKDescr        * dskdsc );

   void dski02_c ( SpiceInt              handle,
                   ConstSpiceDLADescr  * dladsc,
                   SpiceInt              item,
                   SpiceInt              start,
                   SpiceInt              room,
                   SpiceInt            * n,
                   SpiceInt            * values   );

   void dskopn_c ( ConstSpiceChar  * fname,
                   ConstSpiceChar  * ifname,
                   SpiceInt          ncomch,
                   SpiceInt       *  handle );


   void dskn02_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * dladsc,
                   SpiceInt               plid,
                   SpiceDouble            normal[3] );


   void dskp02_c ( SpiceInt              handle,
                   ConstSpiceDLADescr  * dladsc,
                   SpiceInt              start,
                   SpiceInt              room,
                   SpiceInt            * n,
                   SpiceInt              plates[][3] );

   void dskv02_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * dladsc,
                   SpiceInt               start,
                   SpiceInt               room,
                   SpiceInt             * n,
                   SpiceDouble            vrtces[][3] );


   void dskw02_c ( SpiceInt               handle,
                   SpiceInt               surfce,
                   SpiceInt               center,
                   SpiceInt               dclass,
                   ConstSpiceChar       * frame,
                   SpiceInt               corsys,
                   SpiceDouble            mncor1,
                   SpiceDouble            mxcor1,
                   SpiceDouble            mncor2,
                   SpiceDouble            mxcor2,
                   SpiceDouble            mncor3,
                   SpiceDouble            mxcor3,
                   SpiceDouble            first,
                   SpiceDouble            last,
                   SpiceInt               nv,
                   ConstSpiceDouble       vrtces [][3],
                   SpiceInt               np,
                   ConstSpiceInt          plates [][3],
                   ConstSpiceInt          vgrext [3],
                   ConstSpiceDouble       origin [3],
                   SpiceDouble            voxsiz,
                   SpiceInt               cgrscl,
                   ConstSpiceInt          cgrptr[],
                   SpiceInt               voxnpt,
                   ConstSpiceInt          voxptr[],
                   SpiceInt               voxnpl,
                   ConstSpiceInt          voxplt[],
                   ConstSpiceInt          vtxptr[],
                   SpiceInt               vtxnpl,
                   ConstSpiceInt          vtxplt[]    );


   void dskx02_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * dladsc,
                   ConstSpiceDouble       vertex  [3],
                   ConstSpiceDouble       raydir  [3],
                   SpiceInt             * plid,
                   SpiceDouble            xpt     [3],
                   SpiceBoolean         * found        );


   void dskz02_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * dladsc,
                   SpiceInt             * nv,
                   SpiceInt             * np     );

#endif



#ifdef __cplusplus
   }
#endif

