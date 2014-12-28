/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class MadoopJobContext {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MadoopJobContext(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MadoopJobContext obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mdpJNI.delete_MadoopJobContext(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public MadoopJobContext() {
    this(mdpJNI.new_MadoopJobContext(), true);
  }

  public TextFile textFile(SWIGTYPE_p_std__string uri) {
    return new TextFile(mdpJNI.MadoopJobContext_textFile(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(uri)), true);
  }

  public SWIGTYPE_p_Madoop__ImageFile imageFile(SWIGTYPE_p_std__string uri) {
    return new SWIGTYPE_p_Madoop__ImageFile(mdpJNI.MadoopJobContext_imageFile(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(uri)), true);
  }

  public SWIGTYPE_p_Madoop__VideoFile videoFile(SWIGTYPE_p_std__string uri) {
    return new SWIGTYPE_p_Madoop__VideoFile(mdpJNI.MadoopJobContext_videoFile(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(uri)), true);
  }

  public SWIGTYPE_p_Madoop__AudioFile audioFile(SWIGTYPE_p_std__string uri) {
    return new SWIGTYPE_p_Madoop__AudioFile(mdpJNI.MadoopJobContext_audioFile(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(uri)), true);
  }

}