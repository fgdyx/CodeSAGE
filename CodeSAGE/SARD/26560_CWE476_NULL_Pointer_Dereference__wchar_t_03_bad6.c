#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 if(5==5)
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR2[0]);
 }
}
#endif
