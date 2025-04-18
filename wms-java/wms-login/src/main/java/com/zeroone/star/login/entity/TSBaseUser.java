package com.zeroone.star.login.entity;

import com.baomidou.mybatisplus.annotation.TableField;
import com.baomidou.mybatisplus.annotation.TableName;
import lombok.Getter;
import lombok.Setter;

import java.io.Serializable;
import java.sql.Blob;

/**
 * <p>
 * 系统用户
 * </p>
 *
 * @author nefertari
 * @since 2025-02-25
 */
@Getter
@Setter
@TableName("t_s_base_user")
public class TSBaseUser implements Serializable {

    private static final long serialVersionUID = 1L;

    /**
     * ID
     */
    private String id;

    /**
     * 同步流程
     */
    @TableField("activitiSync")
    private Integer activitiSync;

    /**
     * 浏览器
     */
    private String browser;

    /**
     * 密码
     */
    private String password;

    /**
     * 真实名字
     */
    private String realname;

    /**
     * 签名
     */
    private Blob signature;

    /**
     * 有效状态
     */
    private Integer status;

    /**
     * 用户KEY
     */
    private String userkey;

    /**
     * 用户账号
     */
    private String username;

    /**
     * 部门ID
     */
    private String departid;

    /**
     * 删除状态
     */
    private Integer deleteFlag;

    /**
     * 微信openid
     */
    private String wxopenid;


}
