#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 {
 int64_t VAR6[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memmove(VAR5, VAR6, 100*sizeof(VAR3));
 FUN3(VAR5[0]);
 free(VAR5);
 }
}
#endif
