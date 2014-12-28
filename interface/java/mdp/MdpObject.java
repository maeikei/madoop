/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class MdpObject {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MdpObject(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MdpObject obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mdpJNI.delete_MdpObject(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void write(SWIGTYPE_p_std__string uri) {
    mdpJNI.MdpObject_write(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(uri));
  }

}
