/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class TextWordFilter {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TextWordFilter(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TextWordFilter obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mdpJNI.delete_TextWordFilter(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TextWordFilter() {
    this(mdpJNI.new_TextWordFilter(), true);
  }

  public boolean empty() {
    return mdpJNI.TextWordFilter_empty(swigCPtr, this);
  }

}
