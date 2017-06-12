
#ifdef __cplusplus
   extern "C" {
#endif

#ifndef HAVE_SPICE_DLA_PROTO_H

   #define HAVE_SPICE_DLA_PROTO_H



   void dlabfs_c ( SpiceInt          handle,
                   SpiceDLADescr   * descr,
                   SpiceBoolean    * found  );

   void dlafns_c ( SpiceInt               handle,
                   ConstSpiceDLADescr   * descr,
                   SpiceDLADescr        * nxtdsc,
                   SpiceBoolean         * found    );



#endif

#ifdef __cplusplus
   }
#endif

