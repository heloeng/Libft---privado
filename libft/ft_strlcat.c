size_t ft_strlcat(char *dst, const char *src, size_t size)
{

    size_t i;

    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }

    return (ft_strlen(src));
}