#ifndef VAR1
void FUN1(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 {
 int64_t VAR5[100] = {0};
 memmove(VAR4, VAR5, 100*sizeof(VAR2));
 FUN2(VAR4[0]);
 }
}
#endif
