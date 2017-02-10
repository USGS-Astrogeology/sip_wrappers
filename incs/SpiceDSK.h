/*

-Header_File SpiceDSK.h ( CSPICE DSK-specific definitions )

-Abstract

   Perform CSPICE DSK-specific definitions, including macros and user-
   defined types.
         
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

   This header defines macros, enumerated types, structures, and
   typedefs that may be referenced in application code that calls
   CSPICE DSK functions.
   

   General definitions
   ===================

   Macros
   ======


      Dimensions
      ----------

         Name                  Description
         ----                  -----------

         SPICE_DSK_DSCSIZ      Size of a Fortran DSK descriptor,
                               measured in multiples of the size of a
                               SpiceDouble. A array `descr' containing
                               such a descriptor can be declared
 
                                  SpiceDouble descr[SPICE_DSK_DSCSIZ];
 
                               Such arrays normally should be used only
                               in the implementations of CSPICE
                               wrappers.
   

         SPICE_DSK_MAXCGR      Maximum number of elements permitted
                               in the coarse voxel grid.  This parameter
                               is not used directly in CSPICE; rather 
                               it is a convenience parameter that mirrors
                               the parameter MAXCGR declared in the 
                               SPICELIB INCLUDE file

                                  dsk02.inc


      Data class values
      -----------------

         Name                  Description
         ----                  -----------

         SPICE_DSK_SPHCLS      Class 1 indicates a surfaces that can be
                               parameterized using spherical
                               coordinates.
 
                               Only class 1 segments are used for
                               currently supported geometric
                               computations such as observer radius or
                               ray-surface intercept computations.



      Coordinate system values
      ------------------------

         Name                  Description
         ----                  -----------

         SPICE_DSK_LATSYS      Code 1 refers to the planetocentric
                               latitudinal system.
 
                               In this system, the first tangential
                               coordinate is longitude and the second
                               tangential coordinate is latitude. The
                               third coordinate is radius.


         SPICE_DSK_CYLSYS      Code 2 refers to the cylindrical system. 
 
                               In this system, the first tangential
                               coordinate is radius and the second
                               tangential coordinate is longitude. The
                               third, orthogonal coordinate is Z.


         SPICE_DSK_RECSYS      Code 3 refers to the rectangular system.
 
                               In this system, the first tangential
                               coordinate is X and the second
                               tangential coordinate is Y. The third,
                               orthogonal coordinate is Z.


         SPICE_DSK_PDTSYS      Code 4 refers to the
                               planetodetic/geodetic system.

                               In this system, the first tangential
                               coordinate is longitude and the second
                               tangential coordinate is planetodectic
                               latitude. The third, orthogonal
                               coordinate is altitude.


   Structures
   ==========

   
      DSK API structures
      ------------------

         Name                  Description
         ----                  -----------

         SpiceDSKDescr         DSK descriptor.
         
                               The structure members are:
 
                                  surfce:     Surface ID code. Data
                                              type is SpiceInt.
 
                                  center:     Center ID code. Data
                                              type is SpiceInt.
 
                                  dclass:     Data class ID code. Data
                                              type is SpiceInt.
 
                                  dtype:      DSK Data type. Data
                                              type is SpiceInt.
  
                                  frmcde:     Reference frame ID code. Data
                                              type is SpiceInt.

                                  corsys:     Coordinate system ID code. Data
                                              type is SpiceInt.
 
                                  corpar:     Coordinate system parameters.
                                              Data type is SpiceDouble. This
                                              is an array of length 10.
                    
                                  co1min:     Minimum value of first 
                                              coordinate. Data type is 
                                              SpiceDouble.

                                  co1max:     Maximum value of first 
                                              coordinate. Data type is 
                                              SpiceDouble.
                    
                                  co2min:     Minimum value of second 
                                              coordinate. Data type is 
                                              SpiceDouble.

                                  co2max:     Maximum value of second 
                                              coordinate. Data type is 
                                              SpiceDouble.
                    
                                  co3min:     Minimum value of third 
                                              coordinate. Data type is 
                                              SpiceDouble.

                                  co3max:     Maximum value of third 
                                              coordinate. Data type is 
                                              SpiceDouble.

                                  start:      Coverage start time, expressed 
                                              as seconds past J2000 TDB.

                                  stop:       Coverage stop time, expressed 
                                              as seconds past J2000 TDB.
                                  


         ConstSpiceDSKDescr    A constant DSK descriptor.





   Type 2 definitions
   ==================


   Type 2 Macros
   =============


      Dimensions
      ----------

         Name                  Description
         ----                  -----------

         SPICE_DSK_MAXCGR      Maximum number of elements permitted
                               in the coarse voxel grid.  This parameter
                               is not used directly in CSPICE; rather 
                               it is a convenience parameter that mirrors
                               the parameter MAXCGR declared in the 
                               SPICELIB INCLUDE file

                                  dsk02.inc


      Integer keyword parameters
      --------------------------

      The following parameters may be passed to dski02_c to identify
      type 2 DSK shape model SpiceInt type data or model parameters to
      be returned.

      
         Name                  Description
         ----                  ----------

         SPICE_DSK_KWNV        Number of vertices in model.

         SPICE_DSK_KWNP        Number of plates in model.

         SPICE_DSK_KWNVXT      Total number of voxels in fine grid.

         SPICE_DSK_KWVGRX      Voxel grid extent.  This extent is
                               an array of three integers
                               indicating the number of voxels in
                               the X, Y, and Z directions in the
                               fine voxel grid.

         SPICE_DSK_KWCGSC      Coarse voxel grid scale.  The extent
                               of the fine voxel grid is related to
                               the extent of the coarse voxel grid
                               by this scale factor.

         SPICE_DSK_KWVXPS      Size of the voxel-to-plate pointer
                               list.

         SPICE_DSK_KWVXLS      Voxel-plate correspondence list size.

         SPICE_DSK_KWVTLS      Vertex-plate correspondence list
                               size.

         SPICE_DSK_KWPLAT      Plate array.  For each plate, this
                               array contains the indices of the
                               plate's three vertices.  The ordering
                               of the array members is:

                                  Plate 1 vertex index 1
                                  Plate 1 vertex index 2
                                  Plate 1 vertex index 3
                                  Plate 2 vertex index 1
                                  ...

                               The vertex indices in this array start
                               at 1 and end at NV, the number of 
                               vertices in the model.

         SPICE_DSK_KWVXPT      Voxel-plate pointer list. This list
                               contains pointers that map fine
                               voxels to lists of plates that
                               intersect those voxels. Note that
                               only fine voxels belonging to
                               non-empty coarse voxels are in the
                               domain of this mapping.

         SPICE_DSK_KWVXPL      Voxel-plate correspondence list.
                               This list contains lists of plates
                               that intersect fine voxels. (This
                               list is the data structure into
                               which the voxel-to-plate pointers
                               point.)  This list can contain
                               empty lists.  Plate IDs in this
                               list start at 1 and end at NP,
                               the number of plates in the model.

         SPICE_DSK_KWVTPT      Vertex-plate pointer list. This list
                               contains pointers that map vertices
                               to lists of plates to which those
                               vertices belong.

                               Note that the size of this list is
                               always NV, the number of vertices.
                               Hence there's no need for a separate
                               keyword for the size of this list.

         SPICE_DSK_KWVTPL      Vertex-plate correspondence list.
                               This list contains, for each vertex,
                               the indices of the plates to which that
                               vertex belongs. Plate IDs in this list
                               start at 1 and end at NP, the number of
                               plates in the model.

         SPICE_DSK_KWCGPT      Coarse voxel grid pointers.  This is
                               an array of pointers mapping coarse
                               voxels to lists of pointers in the
                               voxel-plate pointer list.  Each
                               non-empty coarse voxel maps to a
                               list of pointers; every fine voxel
                               contained in a non-empty coarse voxel
                               has its own pointers. Grid elements
                               corresponding to empty coarse voxels
                               contain non-positive values.
         

      Double precision keyword parameters
      -----------------------------------

      The following parameters may be passed to dskd02_c to identify
      type 2 DSK shape model SpiceDouble type data or model parameters to
      be returned.

        
         SPICE_DSK_KWDSC       Array containing contents of Fortran
                               DSK descriptor of segment. Note
                               that DSK descriptors are not to be
                               confused with DLA descriptors, which
                               contain segment component base address
                               and size information.  The dimension of
                               this array is SPICE_DSK_DSCSIZ.

         SPICE_DSK_KWVTBD      Vertex bounds. This is an array of
                               six values giving the minimum and
                               maximum values of each component of the
                               vertex set.

         SPICE_DSK_KWVXOR      Voxel grid origin. This is the location
                               of the voxel grid origin in the
                               body-fixed frame associated with the
                               target body.
 
         SPICE_DSK_KWVXSZ      Voxel size.  DSK voxels are cubes; the
                               edge length of each cube is given by the
                               voxel size.  This size applies to the
                               fine voxel grid. Units are km.
 
         SPICE_DSK_KWVERT      Vertex coordinates.




   Type 4 definitions
   ==================
 
 
      Layout of DSK type 4 segment
      ----------------------------

            D.p. layout:


       +---------------------+
       | DSK descriptor      |  DSKDSZ elements
       +---------------------+
       | Format version ID   |  Format version ID code
       +---------------------+
       | NR                  |  number of rows
       +---------------------+
       | NC                  |  number of pixel columns
       +---------------------+
       | Coord 1 pixel size  |  size in units of coordinate 1
       +---------------------+
       | Coord 2 pixel size  |  size in units of coordinate 2
       +---------------------+
       | Center coord 1      |  Coordinates of center of
       +---------------------+  pixel grid
       | Center coord 2      |
       +---------------------+
       | Nulls ok flag       |  0/1 for nulls not allowed/allowed
       +---------------------+
       | Null value          |  Integer value indicating "no data"
       +---------------------+
       | Height scale        |  Height units in km.
       +---------------------+
       | Numeric format      |  Numeric format, e.g. packed 16-bit integer
       +---------------------+
       |Interpolation dsc ptr|  Pointer to interpolation descriptor
       +---------------------+
       | Intercept descr ptr |  Pointer to intercept descriptor
       +---------------------+
       | Normal descr ptr    |  Pointer to normal vector descriptor
       +---------------------+
       | Accel descr ptr     |  Pointer to acceleration descriptor
       +---------------------+
       | Ref surface dsc ptr |  Reference surface descriptor pointer
       +---------------------+
       | Projection dsc ptr  |  Map projection descriptor pointer
       +---------------------+
       | Coarse grid ptr     |  Pointer to coarse grid structure
       +---------------------+
       | Data start ptr      |  Pointer to start of pixel data
       +---------------------+
       | Interp descr        |  Interpolation method descriptor
       +---------------------+
       | Intercept descr     |  Intercept method descriptor
       +---------------------+
       | Normal vec descr    |  Normal vector calc descriptor
       +---------------------+
       | Accel descr         |  Intercept acceleration descriptor
       +---------------------+
       | Ref surface descr   |  Reference surface descriptor
       +---------------------+
       | Map projection descr|  Map projection descriptor
       +---------------------+
       | Coarse grid struct  |  Coarse grid structure
       +---------------------+


            Integer layout:

       +---------------------+
       | Grid dimension count|  Depth of nested grids
       +---------------------+
       | Grid dimensions     |  Row and column sizes of nested grids
       +---------------------+
       | Pixel data          |  Pixels containing height values
       +---------------------+
 



      Integer keyword parameters
      --------------------------

      The following parameters may be passed to dski04_c to identify
      type 4 DSK shape model SpiceInt type data or model parameters to
      be returned.

      
         Name                  Description
         ----                  -----------

         SPICE_DSK04_KWNDIM    Number of dimensions of nested grids
                               in the stored pixel structure.


         SPICE_DSK04_KWGDIM    Array of nested grid dimensions.
                               The array has size 2xN, where N is
                               the nesting level. Element [0,i]
                               is the row count at the ith level;
                               element [1,i] is the column count
                               at the ith level. The top level is 0.

         SPICE_DSK04_KWPIX     This keyword refers to elements of the
                               pixel grid.

         SPICE_DSK04_KWRAW     This keyword refers to stored integers.
                               Contents of the integers depend on the
                               segment's numeric format. If the format  
                               is SPICE_DSK04_NUMI16, each integer
                               contains two 16-bit data values. In this
                               case the raw grid has NR rows and NC/2 columns,
                               where NR and NC are the row and column counts
                               of the pixel grid.


      Double precision keyword parameters
      -----------------------------------

      The following parameters may be passed to dskd04_c to identify
      type 4 DSK shape model SpiceDouble type data or model parameters to
      be returned.

      
         Name                  Description
         ----                  -----------

         SPICE_DSK04_KWDSC     DSK descriptor.

         SPICE_DSK04_KWFMTV    Segment format version.

         SPICE_DSK04_KWNR      Pixel grid row count.

         SPICE_DSK04_KWNC      Pixel grid column count.

         SPICE_DSK04_KWPSZ1    Pixel size in direction of coordinate 1.

         SPICE_DSK04_KWPSZ2    Pixel size in direction of coordinate 2.

         SPICE_DSK04_KWCTR1    Coordinate 1 of pixel grid center.

         SPICE_DSK04_KWCTR2    Coordinate 2 of pixel grid center.

         SPICE_DSK04_KWNLOK    Flag indicating whether null values are allowed.

         SPICE_DSK04_KWNULL    Null value indicator.

         SPICE_DSK04_KWHSCL    Height scale.

         SPICE_DSK04_KWNUMF    Numeric format.

         SPICE_DSK04_KWREFP    Pointer to reference surface descriptor.

         SPICE_DSK04_KWPRJP    Pointer to map projection descriptor.

         SPICE_DSK04_KWITPP    Pointer to interpolation algorithm descriptor.

         SPICE_DSK04_KWXP      Pointer to intercept algorithm descriptor.

         SPICE_DSK04_KWNVP     Pointer to normal vector computation descriptor.

         SPICE_DSK04_KWACCP    Pointer to intercept acceleration descriptor.

         SPICE_DSK04_KWCGP     Pointer to coarse grid structure.

         SPICE_DSK04_KWPIXP    Pointer to pixel data.

         SPICE_DSK04_KWITPD    Interpolation algorithm descriptor.

         SPICE_DSK04_KWXD      Intercept algorithm descriptor.

         SPICE_DSK04_KWNVD     Normal vector algorithm descriptor.

         SPICE_DSK04_KWCGD     Coarse grid descriptor.

         SPICE_DSK04_KWREFD    Reference surface descriptor.

         SPICE_DSK04_KWPRJD    Map projection descriptor.

         SPICE_DSK04_KWACCD    Intercept acceleration descriptor.

       





-Literature_References

   None.

-Author_and_Institution

   N.J. Bachman       (JPL)
   
-Restrictions

   None.
      
-Version

   -CSPICE Version 4.1.0, 02-MAY-2014 (NJB)  

       Added include guards for

          SpiceZdf.h
          SpiceDLA.h
  
       Removed reference to

          dsk_proto.h

       Last update was 13-NOV-2012 (NJB)  

          Updated to support DSK type 4. The SpiceDSKDescr type and
          supporting definitions have been added. The file has been
          reorganized so as to group together data type-specific
          definitions.

   -CSPICE Version 3.0.0, 13-MAY-2010 (NJB)  

       Updated for compatibility with new DSK type 2 segment
       design.

   -CSPICE Version 2.0.0, 12-FEB-2010 (NJB)  

       Updated to include

          SpiceDLA.h
          f2c_proto.h
          dsk_proto.h

   -CSPICE Version 1.0.0, 30-OCT-2006 (NJB)  

*/

#ifndef HAVE_SPICE_DSK_H

   #define HAVE_SPICE_DSK_H
      
   /*
   Prototypes
   */
   #ifndef HAVE_SPICEDEFS_H
      #include "SpiceZdf.h"
   #endif

   #ifndef HAVE_SPICE_DLA_H
      #include "SpiceDLA.h"
   #endif

   
   /*
   General Constants
   */

   
   /*
   Dimension parameters 
   */
 
   /*
   Size of a SPICELIB DSK descriptor (in units of d.p. numbers): 
   */
   #define SPICE_DSK_DSCSIZ                 24                

   /*
   Number of coordinate system parameters in DSK descriptor: 
   */
   #define  SPICE_DSK_NSYPAR                10


   /*
   Index parameters 
   */
   /*
   Fortran DSK descriptor index parameters: 
   */
   #define  SPICE_DSK_SRFIDX                0 
   #define  SPICE_DSK_CTRIDX                1 
   #define  SPICE_DSK_CLSIDX                2 
   #define  SPICE_DSK_TYPIDX                3 
   #define  SPICE_DSK_FRMIDX                4 
   #define  SPICE_DSK_SYSIDX                5 
   #define  SPICE_DSK_PARIDX                6 

   /*
   The offset between the indices immediately above and below
   is given by the parameter SPICE_DSK_NSYPAR. Literal values 
   are used below for convenience of the reader. 
   */
   #define  SPICE_DSK_MN1IDX                16
   #define  SPICE_DSK_MX1IDX                17
   #define  SPICE_DSK_MN2IDX                18
   #define  SPICE_DSK_MX2IDX                19
   #define  SPICE_DSK_MN3IDX                20
   #define  SPICE_DSK_MX3IDX                21
   #define  SPICE_DSK_BTMIDX                22
   #define  SPICE_DSK_ETMIDX                23

 


   /*
   Data class parameters 
   */

   /*
   Spherical data class
   */
   #define SPICE_DSK_SPHCLS                 1


   /*
   Coordinate system parameters 
   */

   /*
   Latitudinal coordinate system
   */
   #define SPICE_DSK_LATSYS                 1

   /*
   Cylindrical coordinate system
   */
   #define SPICE_DSK_CYLSYS                 2

   /*
   Rectangular coordinate system
   */
   #define SPICE_DSK_RECSYS                 3

   /*
   Planetodetic coordinate system
   */
   #define SPICE_DSK_PDTSYS                 4


   /*
   Structures 
   */

   /*
   DSK segment descriptor:
   */   
   struct _SpiceDSKDescr 
   
      {  SpiceInt         surfce;
         SpiceInt         center;
         SpiceInt         dclass;
         SpiceInt         dtype; 
         SpiceInt         frmcde;
         SpiceInt         corsys;
         SpiceDouble      corpar [SPICE_DSK_NSYPAR];
         SpiceDouble      co1min;
         SpiceDouble      co1max;
         SpiceDouble      co2min;
         SpiceDouble      co2max;
         SpiceDouble      co3min;
         SpiceDouble      co3max;
         SpiceDouble      start;
         SpiceDouble      stop;        };
   
   typedef struct _SpiceDSKDescr  SpiceDSKDescr;
   
   /*
   Constant DSK segment descriptor:
   */   
   typedef const SpiceDSKDescr    ConstSpiceDSKDescr;




   /*

   Type 2 definitions 
   ==================

   */

   /*
   Dimension parameters 
   */

   /*
   Maximum size of the coarse voxel grid array (in units of 
   integers):
   */
   #define SPICE_DSK_MAXCGR                 100000

   /*
   Index parameters 
   */

   /*
   Keyword parameters for SpiceInt data items:
   */
   #define  SPICE_DSK_KWNV                  1
   #define  SPICE_DSK_KWNP                  (SPICE_DSK_KWNV   + 1)
   #define  SPICE_DSK_KWNVXT                (SPICE_DSK_KWNP   + 1)
   #define  SPICE_DSK_KWVGRX                (SPICE_DSK_KWNVXT + 1)
   #define  SPICE_DSK_KWCGSC                (SPICE_DSK_KWVGRX + 1)
   #define  SPICE_DSK_KWVXPS                (SPICE_DSK_KWCGSC + 1)
   #define  SPICE_DSK_KWVXLS                (SPICE_DSK_KWVXPS + 1) 
   #define  SPICE_DSK_KWVTLS                (SPICE_DSK_KWVXLS + 1)
   #define  SPICE_DSK_KWPLAT                (SPICE_DSK_KWVTLS + 1)
   #define  SPICE_DSK_KWVXPT                (SPICE_DSK_KWPLAT + 1)
   #define  SPICE_DSK_KWVXPL                (SPICE_DSK_KWVXPT + 1)
   #define  SPICE_DSK_KWVTPT                (SPICE_DSK_KWVXPL + 1)
   #define  SPICE_DSK_KWVTPL                (SPICE_DSK_KWVTPT + 1)
   #define  SPICE_DSK_KWCGPT                (SPICE_DSK_KWVTPL + 1)


   /*
   Keyword parameters for SpiceDouble data items:
   */
   #define  SPICE_DSK_KWDSC                 (SPICE_DSK_KWCGPT + 1)
   #define  SPICE_DSK_KWVTBD                (SPICE_DSK_KWDSC  + 1)
   #define  SPICE_DSK_KWVXOR                (SPICE_DSK_KWVTBD + 1)
   #define  SPICE_DSK_KWVXSZ                (SPICE_DSK_KWVXOR + 1)
   #define  SPICE_DSK_KWVERT                (SPICE_DSK_KWVXSZ + 1)
 

   /*

   Type 4 definitions 
   ==================

   */

   /*
   Keyword parameters for SpiceInt data items:
   */

   #define  SPICE_DSK04_KWNDIM              1
   #define  SPICE_DSK04_KWGDIM            ( SPICE_DSK04_KWNDIM + 1 )   
   #define  SPICE_DSK04_KWPIX             ( SPICE_DSK04_KWNGIM + 1 )   
   #define  SPICE_DSK04_KWRAW             ( SPICE_DSK04_KWRAW  + 1 ) 


   /*
   Keyword parameters for SpiceDouble data items:
   */
 
   /*
   Keyword for DSK descriptor:
   */
   #define  SPICE_DSK04_KWDSC               1

   /*
   Keyword for segment format version:
   */
   #define  SPICE_DSK04_KWFMTV            ( SPICE_DSK04_KWDSC + 1 ) 

   /*
   Keyword for pixel grid row count:
   */
   #define  SPICE_DSK04_KWNR              ( SPICE_DSK04_KWFMTV + 1 ) 

   /*
   Keyword for pixel grid column count:
   */
   #define  SPICE_DSK04_KWNC              ( SPICE_DSK04_KWNR + 1 ) 

   /*
   Keyword for pixel size in the direction of coordinate 1:
   */
   #define  SPICE_DSK04_KWPSZ1            ( SPICE_DSK04_KWNC + 1 ) 

   /*
   Keyword for pixel size in the direction of coordinate 2:
   */
   #define  SPICE_DSK04_KWPSZ2            ( SPICE_DSK04_KWPSZ1 + 1 ) 

   /*
   Keyword for coordinate 1 of pixel grid center:
   */
   #define  SPICE_DSK04_KWCTR1            ( SPICE_DSK04_KWPSZ2 + 1 ) 

   /*
   Keyword for coordinate 2 of pixel grid center:
   */
   #define  SPICE_DSK04_KWCTR2            ( SPICE_DSK04_KWCTR1 + 1 ) 

   /*
   Keyword for flag indicating whether null values are allowed:
   */
   #define  SPICE_DSK04_KWNLOK            ( SPICE_DSK04_KWCTR2 + 1 ) 

   /*
   Keyword for null value indicator:
   */
   #define  SPICE_DSK04_KWNULL            ( SPICE_DSK04_KWNLOK + 1 ) 

   /*
   Keyword for height scale:
   */
   #define  SPICE_DSK04_KWHSCL            ( SPICE_DSK04_KWNULL + 1 ) 

   /*
   Keyword for numeric format:
   */
   #define  SPICE_DSK04_KWNUMF            ( SPICE_DSK04_KWHSCL + 1 ) 

   /*
   Keyword for pointer to reference surface descriptor:
   */
   #define  SPICE_DSK04_KWREFP            ( SPICE_DSK04_KWNUMF + 1 ) 

   /*
   Keyword for map projection decriptor pointer:
   */
   #define  SPICE_DSK04_KWPRJP            ( SPICE_DSK04_KWREFP + 1 ) 

   /*
   Keyword for pointer to interpolation algorithm descriptor:
   */
   #define  SPICE_DSK04_KWITPP            ( SPICE_DSK04_KWPRJP + 1 ) 

   /*
   Keyword for pointer to intercept algorithm descriptor:
   */
   #define  SPICE_DSK04_KWXP              ( SPICE_DSK04_KWITPP + 1 ) 

   /*
   Keyword for pointer to normal vector computation descriptor:
   */
   #define  SPICE_DSK04_KWNVP             ( SPICE_DSK04_KWXP + 1 ) 

   /*
   Keyword for pointer to coarse grid structure:
   */
   #define  SPICE_DSK04_KWCGP             ( SPICE_DSK04_KWACCP + 1 ) 

   /*
   Keyword for pointer to pixel data:
   */
   #define  SPICE_DSK04_KWPIXP            ( SPICE_DSK04_KWCGP + 1 ) 

   /*
   Keyword for interpolation algorithm descriptor:
   */
   #define  SPICE_DSK04_KWITPD            ( SPICE_DSK04_KWPIXP + 1 )   

   /*
   Keyword for intercept algorithm descriptor:
   */
   #define  SPICE_DSK04_KWXD              ( SPICE_DSK04_KWITPD + 1 ) 

   /*
   Keyword for normal vector algorithm descriptor:
   */
   #define  SPICE_DSK04_KWNVD             ( SPICE_DSK04_KWXD + 1 ) 

   /*
   Keyword for coarse grid descriptor:
   */
   #define  SPICE_DSK04_KWCGD             ( SPICE_DSK04_KWNVD + 1 ) 

   /*
   Keyword for reference surface descriptor:
   */
   #define  SPICE_DSK04_KWREFD            ( SPICE_DSK04_KWCGD + 1 ) 

   /*
   Keyword for map projection descriptor:
   */
   #define  SPICE_DSK04_KWPRJD            ( SPICE_DSK04_KWREFD + 1 ) 

   /*
   Keyword for intercept acceleration descriptor:
   */
   #define  SPICE_DSK04_KWACCD            ( SPICE_DSK04_KWPRJD + 1 ) 




#endif

