/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class mdfsFS {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected mdfsFS(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(mdfsFS obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mdfsJNI.delete_mdfsFS(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public mdfsFS() {
    this(mdfsJNI.new_mdfsFS__SWIG_0(), true);
  }

  public mdfsFS(SWIGTYPE_p_std__string confPath) {
    this(mdfsJNI.new_mdfsFS__SWIG_1(SWIGTYPE_p_std__string.getCPtr(confPath)), true);
  }

}
