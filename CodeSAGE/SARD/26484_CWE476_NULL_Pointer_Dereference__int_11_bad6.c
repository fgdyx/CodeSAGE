#ifndef VAR1
void FUN1()
{
 int * VAR2;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN3(*VAR2);
 }
}
#endif
