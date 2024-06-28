#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (int *)calloc(100, sizeof(int));
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 FUN1(&VAR3);
}
#endif
