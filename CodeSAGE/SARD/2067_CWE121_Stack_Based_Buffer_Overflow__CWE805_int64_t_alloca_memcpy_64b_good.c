#ifndef VAR1
void FUN1(void * VAR2)
{
 VAR3 * * VAR4 = (VAR3 * *)VAR2;
 VAR3 * VAR5 = (*VAR4);
 {
 int64_t VAR6[100] = {0};
 memcpy(VAR5, VAR6, 100*sizeof(VAR3));
 FUN2(VAR5[0]);
 }
}
#endif
