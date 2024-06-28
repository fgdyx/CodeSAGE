#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
