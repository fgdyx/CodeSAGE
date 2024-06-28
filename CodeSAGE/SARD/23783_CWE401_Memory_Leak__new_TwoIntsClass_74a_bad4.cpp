#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR5 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR5 = new VAR3;
 VAR5->VAR6 = 0;
 VAR5->VAR7 = 0;
 FUN3(VAR5->VAR6);
 FUN3(VAR5->VAR7);
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
#endif
