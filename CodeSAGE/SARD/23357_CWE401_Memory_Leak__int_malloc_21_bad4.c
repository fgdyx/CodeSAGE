#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (int *)malloc(100*sizeof(int));
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
