#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new char[100];
 strcpy(VAR2, "");
 FUN2(VAR2);
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
