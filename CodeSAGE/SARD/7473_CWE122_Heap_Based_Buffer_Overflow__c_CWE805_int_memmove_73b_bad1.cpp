#ifndef VAR1
void FUN1(VAR2<int *> VAR3)
{
 int * VAR4 = VAR3.FUN2();
 {
 int VAR5[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR4, VAR5, 100*sizeof(int));
 FUN3(VAR4[0]);
 free(VAR4);
 }
}
#endif
