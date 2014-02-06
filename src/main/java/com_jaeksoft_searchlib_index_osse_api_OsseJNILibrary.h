/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary */

#ifndef _Included_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
#define _Included_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_GetVersionInfoText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1GetVersionInfoText
  (JNIEnv *, jobject);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_ExtErrInfo_Create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1ExtErrInfo_1Create
  (JNIEnv *, jobject);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_ExtErrInfo_GetErrorCode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1ExtErrInfo_1GetErrorCode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_ExtErrInfo_GetText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1ExtErrInfo_1GetText
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_ExtErrInfo_Delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1ExtErrInfo_1Delete
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsIndex_Create
 * Signature: (Ljava/lang/String;Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsIndex_1Create
  (JNIEnv *, jobject, jstring, jstring, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsIndex_Open
 * Signature: (Ljava/lang/String;Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsIndex_1Open
  (JNIEnv *, jobject, jstring, jstring, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsIndex_Close
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsIndex_1Close
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_Begin
 * Signature: (JLjava/lang/String;IJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1Begin
  (JNIEnv *, jobject, jlong, jstring, jint, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_Document_GetNewDocId
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1Document_1GetNewDocId
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_Document_AddStringTermsJ
 * Signature: (JI[Ljava/lang/String;IJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1Document_1AddStringTermsJ
  (JNIEnv *, jobject, jlong, jint, jobjectArray, jint, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_RollBack
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1RollBack
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_Commit
 * Signature: (JIJJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1Commit
  (JNIEnv *, jobject, jlong, jint, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_CreateFieldW
 * Signature: (JLjava/lang/String;IIJZJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1CreateFieldW
  (JNIEnv *, jobject, jlong, jstring, jint, jint, jlong, jboolean, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_FindFieldW
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1FindFieldW
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_GetExistingField
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1GetExistingField
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsTransact_DeleteFields
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsTransact_1DeleteFields
  (JNIEnv *, jobject, jlong, jlong, jint, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsIndex_GetListOfFields
 * Signature: (J[IIZJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsIndex_1GetListOfFields
  (JNIEnv *, jobject, jlong, jintArray, jint, jboolean, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsIndex_GetFieldNameAndProperties
 * Signature: (JIJJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsIndex_1GetFieldNameAndProperties
  (JNIEnv *, jobject, jlong, jint, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsQCursor_Create
 * Signature: (JIJIIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsQCursor_1Create
  (JNIEnv *, jobject, jlong, jint, jlong, jint, jint, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsQCursor_Delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsQCursor_1Delete
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsQCursor_GetNumberOfDocs
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsQCursor_1GetNumberOfDocs
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsQCursor_GetDocIds
 * Signature: (J[JJZJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsQCursor_1GetDocIds
  (JNIEnv *, jobject, jlong, jlongArray, jlong, jboolean, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsQCursor_CreateCombinedCursor
 * Signature: (JJIIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsQCursor_1CreateCombinedCursor
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsDocTCursor_Create
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsDocTCursor_1Create
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsDocTCursor_Delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsDocTCursor_1Delete
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsDocTCursor_FindFirstTerm
 * Signature: (JIJJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsDocTCursor_1FindFirstTerm
  (JNIEnv *, jobject, jlong, jint, jlong, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsDocTCursor_FindNextTerm
 * Signature: (JJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsDocTCursor_1FindNextTerm
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary
 * Method:    OSSCLib_MsDocTCursor_GetCurrentTerm
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jaeksoft_searchlib_index_osse_api_OsseJNILibrary_OSSCLib_1MsDocTCursor_1GetCurrentTerm
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif