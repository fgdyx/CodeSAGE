#ifndef VAR1
void FUN1(CWE194_Unexpected_Sign_Extension__connect_socket_malloc_67_structType VAR2)
{
 short VAR3 = VAR2.VAR4;
 if (VAR3 < 100)
 {
 char * VAR5 = (char *)malloc(VAR3);
 memset(VAR5, '', VAR3-1);
 VAR5[VAR3-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
}
#endif
