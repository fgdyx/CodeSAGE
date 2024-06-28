#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN3(&VAR3[0]);
 FUN4(VAR3);
}
#endif
