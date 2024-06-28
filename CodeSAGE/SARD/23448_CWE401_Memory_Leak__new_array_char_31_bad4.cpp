#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN2(VAR2);
 {
 char * VAR3 = VAR2;
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
