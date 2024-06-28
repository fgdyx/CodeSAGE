#ifndef VAR1
int * FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
