#ifndef VAR1
int VAR2 = 0;
void FUN1(struct VAR3 * VAR4);
void FUN2()
{
 struct VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (struct VAR3 *)malloc(100*sizeof(struct VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR4[0]);
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
