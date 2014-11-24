/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uncomplicate_neanderthal_CBLAS */

#ifndef _Included_uncomplicate_neanderthal_CBLAS
#define _Included_uncomplicate_neanderthal_CBLAS
#ifdef __cplusplus
extern "C" {
#endif
#undef uncomplicate_neanderthal_CBLAS_ORDER_ROW_MAJOR
#define uncomplicate_neanderthal_CBLAS_ORDER_ROW_MAJOR 101L
#undef uncomplicate_neanderthal_CBLAS_ORDER_COLUMN_MAJOR
#define uncomplicate_neanderthal_CBLAS_ORDER_COLUMN_MAJOR 102L
#undef uncomplicate_neanderthal_CBLAS_TRANSPOSE_NO_TRANS
#define uncomplicate_neanderthal_CBLAS_TRANSPOSE_NO_TRANS 111L
#undef uncomplicate_neanderthal_CBLAS_TRANSPOSE_TRANS
#define uncomplicate_neanderthal_CBLAS_TRANSPOSE_TRANS 112L
#undef uncomplicate_neanderthal_CBLAS_TRANSPOSE_CONJ_TRANS
#define uncomplicate_neanderthal_CBLAS_TRANSPOSE_CONJ_TRANS 113L
#undef uncomplicate_neanderthal_CBLAS_TRANSPOSE_ATLAS_CONJ
#define uncomplicate_neanderthal_CBLAS_TRANSPOSE_ATLAS_CONJ 114L
#undef uncomplicate_neanderthal_CBLAS_UPLO_UPPER
#define uncomplicate_neanderthal_CBLAS_UPLO_UPPER 121L
#undef uncomplicate_neanderthal_CBLAS_UPLO_LOWER
#define uncomplicate_neanderthal_CBLAS_UPLO_LOWER 122L
#undef uncomplicate_neanderthal_CBLAS_DIAG_NON_UNIT
#define uncomplicate_neanderthal_CBLAS_DIAG_NON_UNIT 131L
#undef uncomplicate_neanderthal_CBLAS_DIAG_UNIT
#define uncomplicate_neanderthal_CBLAS_DIAG_UNIT 132L
#undef uncomplicate_neanderthal_CBLAS_SIDE_LEFT
#define uncomplicate_neanderthal_CBLAS_SIDE_LEFT 141L
#undef uncomplicate_neanderthal_CBLAS_SIDE_RIGHT
#define uncomplicate_neanderthal_CBLAS_SIDE_RIGHT 142L
/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sdsdot
 * Signature: (IFLjava/nio/Buffer;ILjava/nio/Buffer;I)F
 */
JNIEXPORT jfloat JNICALL Java_uncomplicate_neanderthal_CBLAS_sdsdot
  (JNIEnv *, jclass, jint, jfloat, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsdot
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)D
 */
JNIEXPORT jdouble JNICALL Java_uncomplicate_neanderthal_CBLAS_dsdot
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ddot
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)D
 */
JNIEXPORT jdouble JNICALL Java_uncomplicate_neanderthal_CBLAS_ddot
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sdot
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)F
 */
JNIEXPORT jfloat JNICALL Java_uncomplicate_neanderthal_CBLAS_sdot
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    snrm2
 * Signature: (ILjava/nio/Buffer;I)F
 */
JNIEXPORT jfloat JNICALL Java_uncomplicate_neanderthal_CBLAS_snrm2
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dnrm2
 * Signature: (ILjava/nio/Buffer;I)D
 */
JNIEXPORT jdouble JNICALL Java_uncomplicate_neanderthal_CBLAS_dnrm2
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sasum
 * Signature: (ILjava/nio/Buffer;I)F
 */
JNIEXPORT jfloat JNICALL Java_uncomplicate_neanderthal_CBLAS_sasum
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dasum
 * Signature: (ILjava/nio/Buffer;I)D
 */
JNIEXPORT jdouble JNICALL Java_uncomplicate_neanderthal_CBLAS_dasum
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    isamax
 * Signature: (ILjava/nio/Buffer;I)I
 */
JNIEXPORT jint JNICALL Java_uncomplicate_neanderthal_CBLAS_isamax
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    idamax
 * Signature: (ILjava/nio/Buffer;I)I
 */
JNIEXPORT jint JNICALL Java_uncomplicate_neanderthal_CBLAS_idamax
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    srot
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;IFF)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_srot
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint, jfloat, jfloat);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    drot
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;IDD)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_drot
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint, jdouble, jdouble);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    srotg
 * Signature: (Ljava/nio/Buffer;Ljava/nio/Buffer;Ljava/nio/Buffer;Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_srotg
  (JNIEnv *, jclass, jobject, jobject, jobject, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    drotg
 * Signature: (Ljava/nio/Buffer;Ljava/nio/Buffer;Ljava/nio/Buffer;Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_drotg
  (JNIEnv *, jclass, jobject, jobject, jobject, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    srotmg
 * Signature: (Ljava/nio/Buffer;Ljava/nio/Buffer;Ljava/nio/Buffer;FLjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_srotmg
  (JNIEnv *, jclass, jobject, jobject, jobject, jfloat, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    drotmg
 * Signature: (Ljava/nio/Buffer;Ljava/nio/Buffer;Ljava/nio/Buffer;DLjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_drotmg
  (JNIEnv *, jclass, jobject, jobject, jobject, jdouble, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    srotm
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_srotm
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    drotm
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_drotm
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sswap
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sswap
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dswap
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dswap
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sscal
 * Signature: (IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sscal
  (JNIEnv *, jclass, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dscal
 * Signature: (IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dscal
  (JNIEnv *, jclass, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    scopy
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_scopy
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dcopy
 * Signature: (ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dcopy
  (JNIEnv *, jclass, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    saxpy
 * Signature: (IFLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_saxpy
  (JNIEnv *, jclass, jint, jfloat, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    daxpy
 * Signature: (IDLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_daxpy
  (JNIEnv *, jclass, jint, jdouble, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sgemv
 * Signature: (IIIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sgemv
  (JNIEnv *, jclass, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dgemv
 * Signature: (IIIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dgemv
  (JNIEnv *, jclass, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sgbmv
 * Signature: (IIIIIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sgbmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dgbmv
 * Signature: (IIIIIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dgbmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssymv
 * Signature: (IIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssymv
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsymv
 * Signature: (IIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsymv
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssbmv
 * Signature: (IIIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssbmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsbmv
 * Signature: (IIIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsbmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sspmv
 * Signature: (IIIFLjava/nio/Buffer;Ljava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sspmv
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dspmv
 * Signature: (IIIDLjava/nio/Buffer;Ljava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dspmv
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    strmv
 * Signature: (IIIIFLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_strmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtrmv
 * Signature: (IIIIDLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtrmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    stbmv
 * Signature: (IIIIIILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_stbmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtbmv
 * Signature: (IIIIIILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtbmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    stpmv
 * Signature: (IIIIILjava/nio/Buffer;Ljava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_stpmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jobject, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtpmv
 * Signature: (IIIIILjava/nio/Buffer;Ljava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtpmv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jobject, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    strsv
 * Signature: (IIIIILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_strsv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtrsv
 * Signature: (IIIIILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtrsv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    stbsv
 * Signature: (IIIIIILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_stbsv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtbsv
 * Signature: (IIIIIILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtbsv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    stpsv
 * Signature: (IIIIILjava/nio/Buffer;Ljava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_stpsv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jobject, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtpsv
 * Signature: (IIIIILjava/nio/Buffer;Ljava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtpsv
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jobject, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sger
 * Signature: (IIIFLjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sger
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dger
 * Signature: (IIIDLjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dger
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssyr
 * Signature: (IIIFLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssyr
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsyr
 * Signature: (IIIDLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsyr
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sspr
 * Signature: (IIIFLjava/nio/Buffer;ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sspr
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jint, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dspr
 * Signature: (IIIDLjava/nio/Buffer;ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dspr
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jint, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssyr2
 * Signature: (IIIFLjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssyr2
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsyr2
 * Signature: (IIIDLjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsyr2
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sspr2
 * Signature: (IIIFLjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sspr2
  (JNIEnv *, jclass, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dspr2
 * Signature: (IIIDLjava/nio/Buffer;ILjava/nio/Buffer;ILjava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dspr2
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jobject);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    sgemm
 * Signature: (IIIIIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_sgemm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dgemm
 * Signature: (IIIIIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dgemm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssymm
 * Signature: (IIIIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssymm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsymm
 * Signature: (IIIIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsymm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssyrk
 * Signature: (IIIIIFLjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssyrk
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jfloat, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsyrk
 * Signature: (IIIIIDLjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsyrk
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jdouble, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    ssyr2k
 * Signature: (IIIIIFLjava/nio/Buffer;ILjava/nio/Buffer;IFLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_ssyr2k
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint, jfloat, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dsyr2k
 * Signature: (IIIIIDLjava/nio/Buffer;ILjava/nio/Buffer;IDLjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dsyr2k
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint, jdouble, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    strmm
 * Signature: (IIIIIIIFLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_strmm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtrmm
 * Signature: (IIIIIIIDLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtrmm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    strsm
 * Signature: (IIIIIIIFLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_strsm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jfloat, jobject, jint, jobject, jint);

/*
 * Class:     uncomplicate_neanderthal_CBLAS
 * Method:    dtrsm
 * Signature: (IIIIIIIDLjava/nio/Buffer;ILjava/nio/Buffer;I)V
 */
JNIEXPORT void JNICALL Java_uncomplicate_neanderthal_CBLAS_dtrsm
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jdouble, jobject, jint, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
