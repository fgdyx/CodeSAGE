#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
}
#endif
