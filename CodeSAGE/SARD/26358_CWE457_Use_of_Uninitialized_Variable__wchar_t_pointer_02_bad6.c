#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 if(1)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR2);
 }
}
#endif
