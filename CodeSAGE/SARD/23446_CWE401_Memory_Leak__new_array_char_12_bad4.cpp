#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 else
 {
 char VAR3[100];
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
 else
 {
 delete[] VAR2;
 }
}
#endif
