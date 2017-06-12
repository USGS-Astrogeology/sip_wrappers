
#ifndef HAVE_SPICE_F2C_DSK_PROTO_H

   #define HAVE_SPICE_F2C_DSK_PROTO_H

   #ifndef HAVE_SPICEF2C_H
      #include "SpiceZfc.h"
   #endif


extern int dlabfs_(integer *handle, integer *descr, logical *found);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
/*:ref: failed_ 12 0 */
/*:ref: chkout_ 14 2 13 124 */
extern int dlabns_(integer *handle);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dassih_ 14 3 4 13 124 */
/*:ref: failed_ 12 0 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
/*:ref: daslla_ 14 4 4 4 4 4 */
/*:ref: filli_ 14 3 4 4 4 */
/*:ref: dasadi_ 14 3 4 4 4 */
/*:ref: dasudi_ 14 4 4 4 4 4 */
extern int dlaens_(integer *handle);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
/*:ref: daslla_ 14 4 4 4 4 4 */
/*:ref: dasudi_ 14 4 4 4 4 4 */
/*:ref: chkout_ 14 2 13 124 */
extern int dlafns_(integer *handle, integer *descr, 
integer *nxtdsc, logical *found);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
extern int dlaopn_(char *fname, char *ftype, char *ifname, 
integer *ncomch, integer *handle, ftnlen fname_len, 
ftnlen ftype_len, ftnlen ifname_len);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dasonw_ 14 8 13 13 13 4 4 124 124 124 */
/*:ref: dasadi_ 14 3 4 4 4 */
extern int dskb02_(integer *handle, integer *dladsc, integer *nv, 
integer *np, integer *nvxtot, doublereal *vtxbds, 
doublereal *voxsiz, doublereal *voxori, integer *vgrext, 
integer *cgscal, integer *vtxnpl, integer *voxnpt, integer *voxnpl);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
/*:ref: movei_ 14 3 4 4 4 */
/*:ref: dasrdd_ 14 4 4 4 4 7 */
/*:ref: moved_ 14 3 7 4 7 */
/*:ref: vequ_ 14 2 7 7 */
/*:ref: chkout_ 14 2 13 124 */
extern int dskcls_(integer *handle, logical *optmiz);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dascls_ 14 1 4 */
/*:ref: dasham_ 14 3 4 13 124 */
/*:ref: daswbr_ 14 1 4 */
/*:ref: dasllc_ 14 1 4 */
/*:ref: chkout_ 14 2 13 124 */
extern int dskd02_(integer *handle, integer *dladsc, 
integer *item, integer *start, integer *room, integer *n, doublereal *values);
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
/*:ref: dasrdd_ 14 4 4 4 4 7 */
extern int dskgd_(integer *handle, integer *dladsc, doublereal *dskdsc);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dasrdd_ 14 4 4 4 4 7 */
extern int dski02_(integer *handle, integer *dladsc, integer *item, 
integer *start, integer *room, integer *n, integer *values);
/*:ref: filli_ 14 3 4 4 4 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dasrdi_ 14 4 4 4 4 4 */
extern int dskn02_(integer *handle, integer *dladsc, 
integer *plid, doublereal *normal);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dskgd_ 14 3 4 4 7 */
/*:ref: dskz02_ 14 4 4 4 4 4 */
/*:ref: dashlu_ 14 2 4 4 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errfnm_ 14 3 13 4 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dski02_ 14 7 4 4 4 4 4 4 4 */
/*:ref: dskd02_ 14 7 4 4 4 4 4 4 7 */
/*:ref: failed_ 12 0 */
/*:ref: vsub_ 14 3 7 7 7 */
/*:ref: ucrss_ 14 3 7 7 7 */
extern int dskopn_(char *fname, char *ifname, integer *ncomch, 
integer *handle, ftnlen fname_len, ftnlen ifname_len);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dlaopn_ 14 8 13 13 13 4 4 124 124 124 */
/*:ref: chkout_ 14 2 13 124 */
extern int dskp02_(integer *handle, integer *dladsc, 
integer *start, integer *room, integer *n, integer *plates);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dskgd_ 14 3 4 4 7 */
/*:ref: dskz02_ 14 4 4 4 4 4 */
/*:ref: dashlu_ 14 2 4 4 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errfnm_ 14 3 13 4 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dski02_ 14 7 4 4 4 4 4 4 4 */
extern doublereal dsksgr_(doublereal *dskdsc);
/*:ref: moved_ 14 3 7 4 7 */
/*:ref: vnorm_ 7 1 7 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
extern int dskv02_(integer *handle, integer *dladsc, 
integer *start, integer *room, integer *n, doublereal *vrtces);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dskgd_ 14 3 4 4 7 */
/*:ref: dskz02_ 14 4 4 4 4 4 */
/*:ref: dashlu_ 14 2 4 4 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errfnm_ 14 3 13 4 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: dskd02_ 14 7 4 4 4 4 4 4 7 */
extern int dskw02_(integer *handle, integer *surfce, integer *center,
integer *dclass, char *frame, integer *corsys, doublereal *mncor1, 
doublereal *mxcor1, doublereal *mncor2, doublereal *mxcor2, doublereal *mncor3, 
doublereal *mxcor3, doublereal *first, doublereal *last, integer *nv, 
doublereal *vrtces, integer *np, integer *plates, integer *vgrext,
doublereal *origin, doublereal *voxsiz, integer *cgrscl, integer *cgrptr, 
integer *voxnpt, integer *voxptr, integer *voxnpl, integer *voxplt,
integer *vtxptr,integer *vtxnpl, integer *vtxplt, ftnlen frame_len);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: namfrm_ 14 3 13 4 124 */
/*:ref: errch_ 14 4 13 13 124 124 */
/*:ref: errdp_ 14 3 13 7 124 */
/*:ref: dlabns_ 14 1 4 */
/*:ref: failed_ 12 0 */
/*:ref: dasadi_ 14 3 4 4 4 */
/*:ref: cleard_ 14 2 4 7 */
/*:ref: dasadd_ 14 3 4 4 7 */
/*:ref: dpmax_ 7 0 */
/*:ref: dpmin_ 7 0 */
/*:ref: dlaens_ 14 1 4 */
extern int dskx02_(integer *handle, integer *dladsc, 
doublereal *vertex, doublereal *raydir, integer *plid,
doublereal *xpt, logical *found);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dpmax_ 7 0 */
/*:ref: vzero_ 12 1 7 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: vhat_ 14 2 7 7 */
/*:ref: dskb02_ 14 13 4 4 4 4 4 7 7 7 4 4 4 4 4 */
/*:ref: errint_ 14 3 13 4 124 */
/*:ref: dski02_ 14 7 4 4 4 4 4 4 4 */
/*:ref: movei_ 14 3 4 4 4 */
/*:ref: togrid_ 14 4 7 7 7 7 */
/*:ref: touchd_ 7 1 7 */
/*:ref: vlcom3_ 14 7 7 7 7 7 7 7 7 */
/*:ref: vequ_ 14 2 7 7 */
/*:ref: vnorm_ 7 1 7 */
/*:ref: xdda_ 14 6 7 7 4 4 4 4 */
/*:ref: filli_ 14 3 4 4 4 */
/*:ref: orderi_ 14 3 4 4 4 */
/*:ref: failed_ 12 0 */
/*:ref: dskd02_ 14 7 4 4 4 4 4 4 7 */
/*:ref: vdot_ 7 2 7 7 */
/*:ref: vsub_ 14 3 7 7 7 */
/*:ref: vperp_ 14 3 7 7 7 */
/*:ref: vsubg_ 14 4 7 7 4 7 */
/*:ref: insang_ 14 6 7 7 7 7 12 7 */
/*:ref: vlcom_ 14 5 7 7 7 7 7 */
extern int dskz02_(integer *handle, integer *dladsc, integer *nv, integer *np);
/*:ref: return_ 12 0 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: dski02_ 14 7 4 4 4 4 4 4 4 */
/*:ref: chkout_ 14 2 13 124 */
extern logical ingrd_(integer *nvox, integer *voxel);
extern int insang_(doublereal *v, doublereal *e1, 
doublereal *e2, doublereal *e3, logical *found, doublereal *scale);
/*:ref: vcrss_ 14 3 7 7 7 */
/*:ref: vdot_ 7 2 7 7 */
extern int pltrec_(doublereal *v1, doublereal *v2, doublereal *v3, 
doublereal *normal, doublereal *center, doublereal *lside);
/*:ref: vsub_ 14 3 7 7 7 */
/*:ref: ucrss_ 14 3 7 7 7 */
/*:ref: vlcom3_ 14 7 7 7 7 7 7 7 7 */
/*:ref: vdot_ 7 2 7 7 */
extern int togrid_(doublereal *modxyz, doublereal *voxori, 
doublereal *voxsiz, doublereal *grdxyz);
extern int xdda_(doublereal *obs, doublereal *ray, 
integer *nvox, integer *nvxlst, integer *nvx, integer *vxlst2);
/*:ref: return_ 12 0 */
/*:ref: vzero_ 12 1 7 */
/*:ref: chkin_ 14 2 13 124 */
/*:ref: setmsg_ 14 2 13 124 */
/*:ref: sigerr_ 14 2 13 124 */
/*:ref: chkout_ 14 2 13 124 */
/*:ref: ingrd_ 12 2 4 4 */
/*:ref: dpmax_ 7 0 */
/*:ref: errint_ 14 3 13 4 124 */


#endif

