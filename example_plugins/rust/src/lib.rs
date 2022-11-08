// include!(concat!(env!("OUT_DIR"), "/bindings.rs"));
use std::ffi::CString;

mod vendor;

#[no_mangle]
pub extern "C" fn flashmq_plugin_version() -> i32 {
    let logmsg = CString::new("I'm being queried for my version").unwrap();
    unsafe {
        vendor::flashmq_logf(vendor::LOG_INFO.try_into().unwrap(), logmsg.as_ptr());
    }
    return vendor::FLASHMQ_PLUGIN_VERSION as i32;
}
