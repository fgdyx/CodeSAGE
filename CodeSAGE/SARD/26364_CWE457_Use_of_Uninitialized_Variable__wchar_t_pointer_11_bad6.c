#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN3(VAR2);
 }
}
#endif
