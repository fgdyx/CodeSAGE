#ifndef VAR1
void FUN1(int * VAR2[]);
void FUN2()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (int *)malloc(100*sizeof(int));
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
