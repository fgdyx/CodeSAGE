#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR5 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR5 = (VAR3 *)realloc(VAR5, 100*sizeof(VAR3));
 VAR5[0] = 5LL;
 FUN3(VAR5[0]);
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
#endif
