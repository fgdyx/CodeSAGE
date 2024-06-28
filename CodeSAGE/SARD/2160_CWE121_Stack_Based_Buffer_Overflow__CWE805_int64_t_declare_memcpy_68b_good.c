#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR5[100] = {0};
 memcpy(VAR3, VAR5, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
}
#endif
