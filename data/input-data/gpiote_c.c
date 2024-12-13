ret_code_t nrf_drv_ppi_init(void)
{
    if (m_drv_state == NRFX_DRV_STATE_UNINITIALIZED)
    {
        m_drv_state = NRFX_DRV_STATE_INITIALIZED;
    }
    else
    {
        return NRF_ERROR_MODULE_ALREADY_INITIALIZED;
    }
    return NRF_SUCCESS;
}
