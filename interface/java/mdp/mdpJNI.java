/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class mdpJNI {
  public final static native long new_MadoopJobContext();
  public final static native long MadoopJobContext_textFile(long jarg1, MadoopJobContext jarg1_, long jarg2);
  public final static native long MadoopJobContext_imageFile(long jarg1, MadoopJobContext jarg1_, long jarg2);
  public final static native long MadoopJobContext_videoFile(long jarg1, MadoopJobContext jarg1_, long jarg2);
  public final static native long MadoopJobContext_audioFile(long jarg1, MadoopJobContext jarg1_, long jarg2);
  public final static native void delete_MadoopJobContext(long jarg1);
  public final static native void MdpObject_write(long jarg1, MdpObject jarg1_, long jarg2);
  public final static native void delete_MdpObject(long jarg1);
  public final static native long new_TextLine();
  public final static native void delete_TextLine(long jarg1);
  public final static native long new_TextLineFilter();
  public final static native boolean TextLineFilter_empty(long jarg1, TextLineFilter jarg1_);
  public final static native void delete_TextLineFilter(long jarg1);
  public final static native long new_TextWord();
  public final static native void delete_TextWord(long jarg1);
  public final static native long new_TextWordFilter();
  public final static native boolean TextWordFilter_empty(long jarg1, TextWordFilter jarg1_);
  public final static native void delete_TextWordFilter(long jarg1);
  public final static native long new_TextFile(long jarg1);
  public final static native void delete_TextFile(long jarg1);
  public final static native void mc_set(long jarg1, MadoopJobContext jarg1_);
  public final static native long mc_get();
  public final static native long TextLine_SWIGUpcast(long jarg1);
  public final static native long TextWord_SWIGUpcast(long jarg1);
  public final static native long TextFile_SWIGUpcast(long jarg1);
}