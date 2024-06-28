#ifndef VAR1
void FUN1()
{
 int * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
