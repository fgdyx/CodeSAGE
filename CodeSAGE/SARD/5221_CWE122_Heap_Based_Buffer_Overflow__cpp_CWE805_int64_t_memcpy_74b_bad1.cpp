#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 {
 int64_t VAR6[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR5, VAR6, 100*sizeof(VAR3));
 FUN2(VAR5[0]);
 delete [] VAR5;
 }
}
#endif
