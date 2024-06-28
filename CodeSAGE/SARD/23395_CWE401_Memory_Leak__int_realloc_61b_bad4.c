#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 return VAR2;
}
#endif
