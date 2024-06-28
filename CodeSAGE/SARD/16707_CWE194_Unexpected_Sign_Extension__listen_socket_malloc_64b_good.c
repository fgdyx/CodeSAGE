#ifndef VAR1
void FUN1(void * VAR2)
{
 short * VAR3 = (short *)VAR2;
 short VAR4 = (*VAR3);
 if (VAR4 < 100)
 {
 char * VAR5 = (char *)malloc(VAR4);
 memset(VAR5, '', VAR4-1);
 VAR5[VAR4-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
}
#endif
