#ifndef VAR1
void FUN1(struct VAR2 * VAR3);
void FUN2()
{
 struct VAR2 * VAR3;
 void (*VAR4) (struct VAR2 *) = VAR5;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN3((VAR8 *)&VAR3[0]);
 FUN4(VAR3);
}
#endif
