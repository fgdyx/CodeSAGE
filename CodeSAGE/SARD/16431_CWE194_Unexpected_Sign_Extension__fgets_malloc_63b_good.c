#ifndef VAR1
void FUN1(short * VAR2)
{
 short VAR3 = *VAR2;
 if (VAR3 < 100)
 {
 char * VAR4 = (char *)malloc(VAR3);
 memset(VAR4, '', VAR3-1);
 VAR4[VAR3-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
