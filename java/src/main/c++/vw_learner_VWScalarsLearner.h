/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vw_learner_VWScalarsLearner */

#ifndef _Included_vw_learner_VWScalarsLearner
#define _Included_vw_learner_VWScalarsLearner
#ifdef __cplusplus
extern "C"
{
#endif
/*
 * Class:     vw_learner_VWScalarsLearner
 * Method:    predict
 * Signature: (Ljava/lang/String;ZJ)[F
 */
JNIEXPORT jfloatArray JNICALL Java_vw_learner_VWScalarsLearner_predict
(JNIEnv *, jobject, jstring, jboolean, jlong);

/*
 * Class:     vw_learner_VWScalarsLearner
 * Method:    predictMultiline
 * Signature: ([Ljava/lang/String;ZJ)[F
 */
JNIEXPORT jfloatArray JNICALL Java_vw_learner_VWScalarsLearner_predictMultiline
(JNIEnv *, jobject, jobjectArray, jboolean, jlong);

#ifdef __cplusplus
}
#endif
#endif
