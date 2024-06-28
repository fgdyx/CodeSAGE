#ifndef VAR1
void FUN1(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR5 = (char *)malloc(VAR3);
 memset(VAR5, '', VAR3-1);
 VAR5[VAR3-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
}
#endif
